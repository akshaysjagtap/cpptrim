// remove leading and trailing spaces
	string trim(string &data)
	{
		int len = data.length();
		int start_pos = -1, end_pos = -1;
		for(int i=0; i < len; i++)
		{
			if(data[i] != ' ')
			{
				start_pos = i;
				break;	
			}
		}
		for(int i=len-1; i > -1; i--)
		{
			if(data[i] != ' ')
			{
				end_pos = i;
				break;	
			}
		}
		if(start_pos == -1 && end_pos == -1) return "";
         string d = "";
         d.resize(end_pos - start_pos + 1);
         for(int i=start_pos, ind=0 ; i <= end_pos; i++)
             d[ind++] = data[i];
		return d;
	}
