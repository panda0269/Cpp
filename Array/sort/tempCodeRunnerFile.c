 clock_t start, end;
    double cpu_time_used;
    start = clock();
    
qs(arr, 0, n - 1);
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
        printf("Time taken for sorting: %f seconds\n", cpu_time_used);
        return 0;
}
