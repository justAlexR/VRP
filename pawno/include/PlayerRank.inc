	new rtext[30];
	switch(member)
	{
	case 0: rtext = "���";
	case 5:
		{
			switch(rank)
			{
			case 1: rtext = "�������";
			case 2: rtext = "���������";
			case 3: rtext = "�����������";
			case 4: rtext = "�������";
			case 5: rtext = "����";
			case 6: rtext = "�����-����";
			case 7: rtext = "����";
			case 8: rtext = "������� ����";
			case 9: rtext = "����������";
			case 10: rtext = "���";
			default: rtext = "�������";
			}
		}
	case 7:
		{
			switch(rank)
			{
			case 1: rtext = "���������";
			case 2: rtext = "�������";
			case 3: rtext = "������";
			case 4: rtext = "���.������";
			case 5: rtext = "���.����";
			case 6: rtext = "���";
			default: rtext = "���������";
			}
		}
	case 1, 10, 21:
		{
			switch(rank)
			{
			case 1: rtext = "�����";
			case 2: rtext = "������";
			case 3: rtext = "��.�������";
			case 4: rtext = "�������";
			case 5: rtext = "��.�������";
			case 6: rtext = "���������";
			case 7: rtext = "��.���������";
			case 8: rtext = "��.���������";
			case 9: rtext = "���������";
			case 10: rtext = "��.���������";
			case 11: rtext = "�������";
			case 12: rtext = "�����";
			case 13: rtext = "������������";
			case 14: rtext = "���������";
			case 15: rtext = "�����";
			default: rtext = "�����";
			}
		}
	case 2:
		{
			switch(rank)
			{
			case 1: rtext = "�����";
			case 2: rtext = "��������";
			case 3: rtext = "��.�����";
			case 4: rtext = "��.����� CID";
			case 5: rtext = "��.����� OOP";
			case 6: rtext = "��.����� GNK";
			case 7: rtext = "����� CID";
			case 8: rtext = "����� OOP";
			case 9: rtext = "����� GNK";
			case 10: rtext = "��.����� CID";
			case 11: rtext = "��.����� OOP";
			case 12: rtext = "��.����� GNK";
			case 13: rtext = "����� CID";
			case 14: rtext = "����� OOP";
			case 15: rtext = "����� GNK";
			case 16: rtext = "������������ �����";
			case 17: rtext = "����� 1-��� ������";
			case 18: rtext = "����� 2-��� ������";
			case 19: rtext = "��������� FBI";
			case 20: rtext = "��.��������� FBI";
			case 21: rtext = "���.��������� FBI";
			case 22: rtext = "�������� FBI";
			default: rtext = "�����";
			}
		}
	case 3, 19:
		{
			switch(rank)
			{
			case 1: rtext = "�������";
			case 2: rtext = "��������";
			case 3: rtext = "��.�������";
			case 4: rtext = "�������";
			case 5: rtext = "��.�������";
			case 6: rtext = "��������";
			case 7: rtext = "���������";
			case 8: rtext = "��.���������";
			case 9: rtext = "���������";
			case 10: rtext = "��.���������";
			case 11: rtext = "�������";
			case 12: rtext = "�����";
			case 13: rtext = "������������";
			case 14: rtext = "���������";
			case 15: rtext = "�������";
			default: rtext = "�������";
			}
		}
	case 22, 4:
		{
			switch(rank)
			{
			case 1: rtext = "������";
			case 2: rtext = "�������";
			case 3: rtext = "���. ����";
			case 4: rtext = "���������";
			case 5: rtext = "��������";
			case 6: rtext = "������";
			case 7: rtext = "��������";
			case 8: rtext = "������";
			case 9: rtext = "���.����.�����";
			case 10: rtext = "����.����";
			default: rtext = "������";
			}
		}
	case 8:
		{
			switch(rank)
			{
			case 1: rtext = "�����";
			case 2: rtext = "������";
			case 3: rtext = "������";
			case 4: rtext = "���.���������";
			case 5: rtext = "��������";
			default: rtext = "�����";
			}
		}
	case 6:
		{
			switch(rank)
			{
			case 1: rtext = "������";
			case 2: rtext = "�����";
			case 3: rtext = "ʸ���";
			case 4: rtext = "����-�������";
			case 5: rtext = "����������";
			case 6: rtext = "��-�������";
			case 7: rtext = "�����";
			case 8: rtext = "����� �����";
			case 9: rtext = "�����";
			case 10: rtext = "������";
			default: rtext = "������";
			}
		}
	case 14:
		{
			switch(rank)
			{
			case 1: rtext = "�����";
			case 2: rtext = "�����";
			case 3: rtext = "���";
			case 4: rtext = "������";
			case 5: rtext = "�������";
			case 6: rtext = "�����";
			case 7: rtext = "������";
			case 8: rtext = "���";
			case 9: rtext = "��� � ������";
			case 10: rtext = "���������";
			default: rtext = "�����";
			}
		}
	case 15:
		{
			switch(rank)
			{
			case 1: rtext = "�����";
			case 2: rtext = "������";
			case 3: rtext = "�����";
			case 4: rtext = "���� �";
			case 5: rtext = "�������";
			case 6: rtext = "�.�";
			case 7: rtext = "������";
			case 8: rtext = "�� ����";
			case 9: rtext = "������";
			case 10: rtext = "��� ���";
			default: rtext = "�����";
			}
		}
	case 17:
		{
			switch(rank)
			{
			case 1: rtext = "�����";
			case 2: rtext = "�������";
			case 3: rtext = "������";
			case 4: rtext = "��� ������";
			case 5: rtext = "�������";
			case 6: rtext = "�����";
			case 7: rtext = "�������";
			case 8: rtext = "��������";
			case 9: rtext = "������";
			case 10: rtext = "�����";
			default: rtext = "�����";
			}
		}
	case 12:
		{
			switch(rank)
			{
			case 1: rtext = "�����";
			case 2: rtext = "������";
			case 3: rtext = "������";
			case 4: rtext = "��� ���";
			case 5: rtext = "�� ���";
			case 6: rtext = "��������";
			case 7: rtext = "������� ����";
			case 8: rtext = "�����";
			case 9: rtext = "���� �����";
			case 10: rtext = "��� �����";
			default: rtext = "�����";
			}
		}
	case 18:
		{
			switch(rank)
			{
			case 1: rtext = "������";
			case 2: rtext = "������";
			case 3: rtext = "�����";
			case 4: rtext = "����";
			case 5: rtext = "�������";
			case 6: rtext = "������";
			case 7: rtext = "�������";
			case 8: rtext = "���������";
			case 9: rtext = "�������";
			case 10: rtext = "�����";
			default: rtext = "������";
			}
		}
	case 13:
		{
			switch(rank)
			{
			case 1: rtext = "������";
			case 2: rtext = "���������";
			case 3: rtext = "�����";
			case 4: rtext = "����������";
			case 5: rtext = "�������";
			case 6: rtext = "V.E.G";
			case 7: rtext = "��������";
			case 8: rtext = "����� V.E.G";
			case 9: rtext = "�������";
			case 10: rtext = "�����";
			default: rtext = "������";
			}
		}
	case 16:
		{
			switch(rank)
			{
			case 1: rtext = "�����������";
			case 2: rtext = "������";
			case 3: rtext = "�����������";
			case 4: rtext = "�������";
			case 5: rtext = "����������";
			case 6: rtext = "�������";
			case 7: rtext = "�������";
			case 8: rtext = "��������";
			case 9: rtext = "���������";
			case 10: rtext = "��������";
			case 11: rtext = "������� ��������";
			case 12: rtext = "����������� ���������";
			case 13: rtext = "��������";
			default: rtext = "�����������";
			}
		}
	case 11:
		{
			switch(rank)
			{
			case 1: rtext = "������";
			case 2: rtext = "�����������";
			case 3: rtext = "�����������";
			case 4: rtext = "������� ����������";
			case 5: rtext = "����������";
			case 6: rtext = "�����������";
			case 7: rtext = "������� ��������";
			case 8: rtext = "������� ��������";
			case 9: rtext = "��������";
			case 10: rtext = "�����������";
			default: rtext = "�����";
			}
		}
	case 25:
		{
			switch(rank)
			{
			case 1: rtext = "���������";
			case 2: rtext = "��.���������";
			case 3: rtext = "��.���������";
			case 4: rtext = "���������";
			case 5: rtext = "��.���������";
			case 6: rtext = "�������";
			case 7: rtext = "�����";
			case 8: rtext = "������������";
			case 9: rtext = "���������";
			case 10: rtext = "���.������������� SWAT";
			default: rtext = "���������";
			}
		}
	case 23:
		{
			switch(rank)
			{
			case 12: rtext = "��������";
			case 11: rtext = "���.���������";
			case 10: rtext = "������������";
			case 9: rtext = "������";
			case 8: rtext = "�������� ������";
			case 7: rtext = "������-��������";
			case 6: rtext = "����� ������";
			case 5: rtext = "����.�����";
			case 4: rtext = "�����";
			case 3: rtext = "������";
			case 2: rtext = "������";
			case 1: rtext = "������";
			default: rtext = "������";
			}
		}
	case 24:
		{
			switch(rank)
			{
			case 10: rtext = "������ ����";
			case 9: rtext = "������ ������";
			case 8: rtext = "������ �����";
			case 7: rtext = "������";
			case 6: rtext = "������������";
			case 5: rtext = "������� �����������";
			case 4: rtext = "�����������";
			case 3: rtext = "������";
			case 2: rtext = "�������";
			case 1: rtext = "�����";
			default: rtext = "�����";
			}
		}
	case 26:
		{
			switch(rank)
			{
			case 1: rtext = "�������";
			case 2: rtext = "��������� ������";
			case 3: rtext = "�����-���������";
			case 4: rtext = "������� ��������������";
			case 5: rtext = "������� ���";
			case 6: rtext = "������� �������";
			case 7: rtext = "��������� �����";
			case 8: rtext = "�������-�������";
			case 9: rtext = "����-���������";
			case 10: rtext = "��������� �����";
			default: rtext = "������� ����������";
			}
		}
	case 27:
		{
			switch(rank)
			{
			case 1: rtext = "������";
			case 2: rtext = "��.������";
			case 3: rtext = "������";
			case 4: rtext = "C�.������";
			case 5: rtext = "���������";
			case 6: rtext = "�������-���������";
			case 7: rtext = "������� 3 �����";
			case 8: rtext = "������� 2 �����";
			case 9: rtext = "������� 1 �����";
			case 10: rtext = "����-�������";
			case 11: rtext = "�������";
			default: rtext = "������";
			}
		}
	case 28:
		{
			switch(rank)
			{
			case 1: rtext = "Support";
			case 2: rtext = "Hang around";
			case 3: rtext = "Prospect";
			case 4: rtext = "Member";
			case 5: rtext = "Road captain";
			case 6: rtext = "Sergeant-at-arms";
			case 7: rtext = "Treasurer";
			case 8: rtext = "Hunter";
			case 9: rtext = "Road Hunter";
			case 10: rtext = "���� ���������";
			case 11: rtext = "���������";
			default: rtext = "";
			}
		}
	default: rtext = "���";
	}
	return rtext;