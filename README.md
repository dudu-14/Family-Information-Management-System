目前是登录卡死循环（LoginForm.h 206Line）
cpp
'''
FILE* fin = fopen("./data/users.txt", "r");
		if (fin == NULL)
		{
			MessageBox::Show("文件打开失败！是不是没有注册？找不到文件啊:(", "错误", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		std::string thisUserName = msclr::interop::marshal_as<std::string>(userName);
		std::string thisPassWord = msclr::interop::marshal_as<std::string>(passWord);
		std::string file_userName;
		std::string file_passWord;
		while (fscanf(fin, "user=%s password=%s", file_userName.data(), file_passWord.data()) != EOF)
		{
			printf("文件 name %s password %s\n", file_userName.c_str(), file_passWord.c_str());
			const char*file_username_const=file_userName.data();
			const char*file_password_const=file_passWord.data();
			if (strcmp(file_userName.c_str(), thisUserName.c_str()) == 0 && strcmp(file_passWord.c_str(), thisPassWord.c_str()) == 0)
			{
				fclose(fin);
				MessageBox::Show("登录成功！", "成功", MessageBoxButtons::OK, MessageBoxIcon::Information);
				printf("登录成功！\n");
				this->Close();
				return;
			}
		}
'''