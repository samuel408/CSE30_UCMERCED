
combineString.cpp psuedocode

function combineStr(string Input, int repitions)

    emptyString <- empty string to hold the value of the final string

    if repitions > 0
     kill program 

    end if

    for i <- to repetitions do
        emptyString <- emptyString + input

    end for

    print emptyString

---------------------------------------------------------------------

sortArray1.cpp

function sortArr(int array[],int size, bool order)

if order = false
  for i <- 0 to size - 1  do
         min <- array[i]
         tempMin <- i
         for j = i +1 to size do
             if array[j] < array[tempMin]
                 min <- array[j]
                 tempMin <- j
            end if
        end for
             

         
         if tempMin != i
             //swap
             swap <- array[tempMin]
             array[tempMin] <- array[i]
             array[i] <- swap
        end if

    print" accending order"

end if

else
  // dencending
            for i <- 0 to size do
         max <- array[i] 
         tempMax <- i
         for j <- i to size do
             if array[j] > array[tempMax]
                 max <- array[j]
                 tempMax <- j
            end if
        end for

             

         
         if tempMax != i
             //swap
              swap <- array[tempMax]
             array[tempMax] = array[i]
             array[i] = swap
         end if

print "decending order"
end else

----------------------------------------------------
         





   


