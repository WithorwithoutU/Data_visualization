#ifndef DATASET_H
#define DATASET_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPointF>
#include "gsl/gsl_matrix.h"

/********************************
 *
 *  This class is defined to handle the datasets,
 *  an object of this class represents the set of points making a dataset
 *
 *  The dataset gets stroed into a GSL Matrix, and object from GSL library
 *  which allows it to be compatable with so many functions avialable as part
 *  of GSL library
 *
 *
**********************************/

class DataSet
{

private:
    int NumberOfRows=0; // Assuming that a datset only has two columns
    double DataPoint[2]; // An array containing the information of 2 datapoints
    gsl_matrix *Matrix; // GSL Matrix object to store the data
    static int DataSetCounter; // Number of Datasets in the app at any moment ( defined as static because it is shared among all objects of this class)
    QString NameOfColumn1 = "x";
    QString NameOfColumn2 = "y";
    QString DataSetName; // Name of the Dataset
    QString DataSetDescription; //Description of Dataset

public:
    DataSet(QString& FileName); // Create a new dataset by loading a file
    DataSet(QVector<QPointF> dataIn); // Creating a new dataset by function evaluation
    int Size(); // function to get the size of the dataset (currenlty the number of rows only)
    QString getNameOfColumn1();
    void setNameOfColumn1(QString* Column1);
    QString getNameOfColumn2();
    void setNameOfColumn2(QString* Column2);
    QString getName(); // Function to get the name of the dataset
    void setName(QString* name);
    QString getDescription();
    void setDescription(QString* description);
    double* getPoint(int i); // Function to return the ith datapoint

    bool IsDataSetValid=true; // Used to detect and handle error subsquently

};

#endif // DATASET_H
