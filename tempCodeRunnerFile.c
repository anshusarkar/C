if(choice>4)
    {   
        printf("Wrong choice...\n\n");
    }
    if (choice==1)
      {
        insert();
      }
    else if (choice==2)
      {
        if (arr[0]==0)
          {
            printf("Array is empty!\n");
            printf("Array is in uendeflow");
          }
        else
            {
             display();
             printf("]\n\n");
            }
        
      }  
    else if (choice ==3)
      {
        printf("Perfroming deletation\n\n");
        delete();
        printf("Done...\n\n");
      }
    }
     printf("\n\nExiting.....\n\nEnter choice again.....\n\n");