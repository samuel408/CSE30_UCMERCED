
searchArray2.cpp psuedocode
//loop 
function binarySearchL(string array, int size,string search)

    returnedValue <- returned value of the function
    
        for  i <- 0 to size do
            if array[i] = search
                returnedValue <- i
            end if 
            else
                returnedValue <- -1
            end else
        end for

    return returnedValue


---------------------------------------------------------------------

searchArray1.cpp psuedocode

//recursive
function binarySearchR(string array, int size,string search, int start, int mid)

    returnedValue <- returned value of the function
    
        if array[start] = search
            return start
        end if 

        if array[mid] = search
            return  mid
        end if 

        else
          if start < (size/2)-1 AND mid < size-1
            
            mid = mid + 1;
            start = start + 1;
    binarySearchR(array,size,search,start,mid)
        end else

    return returnedValue