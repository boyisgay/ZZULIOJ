vector

���췽ʽ{

    int myArr[]={1,2,3,4,5};

    vector<int> myVector;  //  ��

    vector<int> myVector2(myArr,myArr + 5);//1 2 3 4 5  ��������myArr���±�0��ʼ5��

    vector<int> myVector3(5,2);//2 2 2 2 2         5��2

    vector<int> myVector4(myVector2);//1 2 3 4 5    ����myVector2

    vector<int> myVector5(myVector4.begin(),myVector4.begin() + 3);//1 2 3����myvector4.begin��ʼ3��
                                                                    //myVector.endd����β

}



���
for(int i=0;i<myVector.size();i++){
    printf("%d ",myVector[i]);
}


����ʹ��{

    int myArray[] = {1, 2, 3, 4, 5};
    vector<int> myVector(myArray, myArray + 5); //1, 2, 3, 4, 5

    //��С
    int n = myVector.size();     //n= 5

    //����ĩβ
    myVector. pop_back();       //1, 2, 3, 4

    //��6����ĩβ
    myVector. push_back(6);         //1,2,3,4,6

    //��myVector.begin() + 1λ�ò���9
    myVector. insert( myVector.begin() + 1, 9); //1, 9, 2, 3, 4, 6

    //��myVector.begin() λ�� ���� 3 �� 7
    myVector. insert( myVector. begin(), 3, 7); //7, 7, 7, 1, 9, 2, 3, 4, 6

    //��myVector.begin() λ�� ����myArray��myArray + 2һ������
    myVector. insert( myVector. begin(), myArray, myArray + 2); // 1, 2, 7, 7, 7, 1, 9, 2, 3, 4, 6

    //ɾ����6��Ԫ��
    myVector. erase( myVector.begin() + 6);   //1,2,7,7,7,1,2,3,4,6

    //ɾ��һ������
    myVector . erase( myVector.begin() + 1, myVector.begin() + 3); // 1, 7, 7, 1, 2, 3, 4

    //���
    myVector.clear(); //

}



