#include <iostream>
#include <vector>

// Classe de base utilisant le CRTP
template <typename Derived>
class TimeSeriesBase {
public:
    void print() const {
        static_cast<const Derived*>(this)->printImpl();
    }
    
    // Exemple d'une méthode générique
    void applyTransformation(double factor) {
        static_cast<Derived*>(this)->applyTransformationImpl(factor);
    }
};

// Séries temporelles simples
class SimpleTimeSeries : public TimeSeriesBase<SimpleTimeSeries> {
public:
    SimpleTimeSeries(const std::vector<double>& data) : data_(data) {}

    void printImpl() const {
        for (auto val : data_) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    
    void applyTransformationImpl(double factor) {
        for (auto& val : data_) {
            val *= factor;
        }
    }
    
private:
    std::vector<double> data_;
};

// Séries temporelles moyennées
class MovingAverageTimeSeries : public TimeSeriesBase<MovingAverageTimeSeries> {
public:
    MovingAverageTimeSeries(const std::vector<double>& data, int window)
        : data_(data), windowSize_(window) {}

    void printImpl() const {
        for (size_t i = 0; i < data_.size(); ++i) {
            if (i >= windowSize_ - 1) {
                double avg = 0.0;
                for (size_t j = i + 1 - windowSize_; j <= i; ++j) {
                    avg += data_[j];
                }
                avg /= windowSize_;
                std::cout << avg << " ";
            }
        }
        std::cout << std::endl;
    }
    
    void applyTransformationImpl(double factor) {
        for (auto& val : data_) {
            val *= factor;
        }
    }
    
private:
    std::vector<double> data_;
    int windowSize_;
};

int main() {
    std::vector<double> data = {1.0, 2.0, 3.0, 4.0, 5.0};

    SimpleTimeSeries simpleSeries(data);
    MovingAverageTimeSeries avgSeries(data, 3);

    std::cout << "Simple Time Series: ";
    simpleSeries.print();
    
    std::cout << "Moving Average Time Series: ";
    avgSeries.print();
    
    simpleSeries.applyTransformation(2.0);
    avgSeries.applyTransformation(2.0);
    
    std::cout << "After applying transformation:" << std::endl;
    std::cout << "Simple Time Series: ";
    simpleSeries.print();
    
    std::cout << "Moving Average Time Series: ";
    avgSeries.print();

    return 0;
}
