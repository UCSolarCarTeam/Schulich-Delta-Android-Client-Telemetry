#include "PowerGraphData.h"
#include <QDebug>

PowerGraphData::PowerGraphData()
{
}

PowerGraphData::PowerGraphData(int numberOfIntervals,
                               double intervalSize,
                               int numberOfDataSets)
{
    xData_ = QVector<double>(numberOfIntervals);
    for(int i = 0; i < numberOfIntervals; i++)
    {
        xData_.prepend((double)i * intervalSize);
    }

    yDataSets_ = QList<QVector<double> >();
    for(int i = 0; i < numberOfDataSets; i++)
    {
        yDataSets_.append(QVector<double>(numberOfIntervals, 0));
    }
}

QVector<double> PowerGraphData::xData()
{
    return xData_;
}

QList<QVector<double> > PowerGraphData::yDataSets()
{
    return yDataSets_;
}

void PowerGraphData::addData(double datum[])
{
    for(int i = 0; i < yDataSets_.length(); i++)
    {
        yDataSets_[i].removeLast();
        yDataSets_[i].prepend(datum[i]);
    }
}


