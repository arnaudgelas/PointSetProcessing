#ifndef __vtkEuclideanMinimumSpanningTree_h
#define __vtkEuclideanMinimumSpanningTree_h

#include <vtkSmartPointer.h>
#include "vtkTreeAlgorithm.h" //superclass

class vtkGraph;

class vtkEuclideanMinimumSpanningTree : public vtkTreeAlgorithm
{
  public:
    static vtkEuclideanMinimumSpanningTree *New();
    vtkTypeMacro(vtkEuclideanMinimumSpanningTree, vtkTreeAlgorithm);
    void PrintSelf(ostream &os, vtkIndent indent);

    vtkSetMacro( KNeighbors, int );
    vtkGetMacro( KNeighbors, int );

  protected:
    vtkEuclideanMinimumSpanningTree(){ KNeighbors = 100;}
    ~vtkEuclideanMinimumSpanningTree(){}
    int FillInputPortInformation( int port, vtkInformation* info );
    int RequestData(vtkInformation *, vtkInformationVector **, vtkInformationVector *); //the function that makes this class work with the vtk pipeline
    int RequestDataObject(vtkInformation *, vtkInformationVector **, vtkInformationVector *); //the function that makes this class work with the vtk pipeline

  private:
    int KNeighbors;
};

#endif

