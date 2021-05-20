char* dayOfProgrammer(int year) {
    if(year < 1918){
        if((year % 4) == 0) 
        sprintf(ret_str, "12.09.%d", year);
        else
        sprintf(ret_str, "13.09.%d", year);
    }
    else if(year == 1918)
        sprintf(ret_str, "26.09.%d", year);
    else{
        if((((year % 4) == 0) && ((year % 100) != 0))|| ((year % 400) == 0))
        sprintf(ret_str, "12.09.%d", year);
        else
        sprintf(ret_str, "13.09.%d", year);
    }
    return ret_str;
}
`
