//#include <iostream>
//
////Дадена ви е матрица от цели числа с размери n* n(n <= 100).Да се изведат едни след друг елементите :
////
////под главния диагонал, включително елементите по него
////над главния диагонал, без елементите по него
////под второстепенния диагонал, без елементите по него
////над второстепенния диагонал, включително елементите по него
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    std::cout << "Enter n";
//    std::cin >> n;
//    std::cout << "Enter m";
//    std::cin >> m;
//    std::cout << std::endl;
//
//    double** matrix = new double*[n];
//    for (size_t i = 0; i < n; i++)
//    {
//        matrix[i] = new double[m];
//    }
//
//    for (size_t i = 0; i < n; i++)
//    {
//        for (size_t j = 0; j < m; j++)
//        {
//            std::cout << "Enter element[" << i << "] " << "[" << j << "]";
//            std::cin >> matrix[i][j];
//        }
//    }
//
//    //под главния диагонал, включително елементите по него
//    int sum = 0;
//    for (size_t i = 0; i < n; i++)
//    {
//        for (size_t j = 0; j < m; j++)
//        {
//            if (i >= j)
//            {
//                sum += matrix[i][j];
//                std::cout << matrix[i][j] << " ";
//            }
//        }
//
//        std::cout << "\n";
//    }
//    std::cout << sum;
//    std::cout << std::endl;
//
//    ////над главния диагонал, без елементите по него
//    //for (size_t i = 0; i < n; i++)
//    //{
//    //    for (size_t j = 0; j < m; j++)
//    //    {
//    //        if (j > i) {
//    //            std::cout << matrix[i][j] << " ";
//    //        }
//    //    }
//    //    std::cout << "\n";
//    //}
//    //std::cout << std::endl;
//
//    ////под второстепенния диагонал, без елементите по него
//    //for (size_t i = 0; i < n; i++)
//    //{
//    //    for (size_t j = 0; j < m; j++)
//    //    {
//    //        if (i > n - 1 - j)
//    //        {
//    //            std::cout << matrix[i][j] << " ";
//    //        }
//    //    }
//    //    std::cout << "\n";
//    //}
//    //std::cout << std::endl;
//
//    ////над второстепенния диагонал, включително елементите по него
//    //for (size_t i = 0; i < n; i++)
//    //{
//    //    for (size_t j = 0; j < m; j++)
//    //    {
//    //        if (i <= n - 1 - j)
//    //        {
//    //            std::cout << matrix[i][j] << " ";
//    //        }
//    //    }
//    //    std::cout << "\n";
//    //}
//    //std::cout << std::endl;
//
//
//    for (size_t i = 0; i < n; i++)
//    {
//        delete[] matrix[i];
//    }
//	  delete[] matrix;
//}
//
