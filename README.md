Ŀǰ�ǵ�¼����ѭ����LoginForm.h 206Line��
cpp
'''
FILE* fin = fopen("./data/users.txt", "r");
		if (fin == NULL)
		{
			MessageBox::Show("�ļ���ʧ�ܣ��ǲ���û��ע�᣿�Ҳ����ļ���:(", "����", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		std::string thisUserName = msclr::interop::marshal_as<std::string>(userName);
		std::string thisPassWord = msclr::interop::marshal_as<std::string>(passWord);
		std::string file_userName;
		std::string file_passWord;
		while (fscanf(fin, "user=%s password=%s", file_userName.data(), file_passWord.data()) != EOF)
		{
			printf("�ļ� name %s password %s\n", file_userName.c_str(), file_passWord.c_str());
			const char*file_username_const=file_userName.data();
			const char*file_password_const=file_passWord.data();
			if (strcmp(file_userName.c_str(), thisUserName.c_str()) == 0 && strcmp(file_passWord.c_str(), thisPassWord.c_str()) == 0)
			{
				fclose(fin);
				MessageBox::Show("��¼�ɹ���", "�ɹ�", MessageBoxButtons::OK, MessageBoxIcon::Information);
				printf("��¼�ɹ���\n");
				this->Close();
				return;
			}
		}
'''