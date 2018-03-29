﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Ports;
public class Piano : MonoBehaviour {
	SerialPort sp = new SerialPort ("COM3", 9600);
	public bool holded;
	public int holdedKey;
	// Use this for initialization
	void Awake(){

	}
	void Start () {
		sp.Open ();
	}
	
	// Update is called once per frame
	void Update () {
		if (holded) {
			Play (holdedKey,4);
		}	
	}
	public void Holded()
	{
		
		holded = true;
	}
	public void OnButtonUp()
	{
		holded = false;
	}
	public void Play (int keyNumber)
	{
		holdedKey = keyNumber;
		Play(keyNumber,4);
	}
	public void Play (int keyNumber,int delay) {
		sp.Write (KeyNumToChar(keyNumber)+"");
		Debug.Log (KeyNumToChar (keyNumber) + "");
		//sp.Write (KeyNumToChar(delay)+"");
	}

	public char KeyNumToChar(int keyNum)
	{
		switch (keyNum)
		{ 
		//1
		case 1:
		    return '☺';
	
			//2
		case 2: 
			return '☻';
		
			//3
		case 3: 
			return'♥';
		
			//4
		case 4: 
			return '♦';
		
			//5
		case 5:
			return '♣';

			//6
		case 6:
			return '♠';
		
			//7
		case 7:
			return '•';
	
			//8
		case 8: 
			return '◘';
		
			//9
		case 9: 
			return '○';
		
			//10
		case 10: 
			return '◙';
		
			//11
		case 11:
			return'♂';
		
			//12
		case 12:
			return '♀';
		
			//13
		case 13: 
			return '♪';
		
			//14
		case 14: 
			return '♫';

			//15
		case 15: 
			return '☼';

			//16
		case 16: 
			return '►';
		
			//17
		case 17: 
			return '◄';
		
			//18
		case 18: 
			return '↕';

			//19
		case 19: 
			return '‼';

			//20
		case 20: 
			return '¶';

			//21
		case 21: 
			return '§';

			//22
		case 22: 
			return '▬';

			//23
		case 23: 
			return '↨';
		
			//24
		case 24: 
			return '↑';
		
			//25
		case 25:
			return '↓';
		
			//26
		case 26:
			return '→';
		
			//27
		case 27:
			return '←';
		
			//28
		case 28: 
			return '∟';

			//29
		case 29: 
			return '↔';
		
			//30
		case 30:
			return '▲';
		
			//31
		case 31: 
			return '▼';
		
			//32
		case 32: 
			return ' ';
		
			//33
		case 33: 
			return '!';
		
			//34
		case 34: 
			return '"';
		
			//35
		case 35:
			return '#';
	
			//36
		case 36: 
			return '$';
		
			//37
		case 37: 
			return '%';
		
			//38
		case 38: 
			return '&';
	
			//39
		case 39:
			return '\'';
		
			//40
		case 40: 
			return '(';
		
			//41
		case 41: 
			return ')';
		
			//42
		case 42: 
			return '*';
		
			//43
		case 43:
			return '+';
		
			//44
		case 44: 
			return ',';
		
			//45
		case 45: 
			return '-';
		
			//46
		case 46: 
			return '.';
		
			//47
		case 47: 
			return '/';
		
			//48
		case 48: 
			return '0';
		
			//49
		case 49: 
			return '1';
		
			//50
		case 50: 
			return '2';
		
			//51
		case 51: 
			return '3';
		
			//52
		case 52:
			return '4';
		
			//53
		case 53:
			return '5';

			//54
		case 54:
			return '6';
		
			//55
		case 55: 
			return '7';
		
			//56
		case 56: 
			return '8';
		
			//57
		case 57: 
			return '9';
		
			//58
		case 58: 
			return ':';
		
			//59
		case 59: 
			return ';';
		
			//60
		case 60: 
			return '<';
		
			//61
		case 61: 
			return '=';
		
			//62
		case 62:
			return '>';
		
			//63
		case 63: 
			return '?';
		
			//64
		case 64:
			return '@';
		
			//65
		case 65: 
			return 'A';
		
			//66
		case 66:
			return 'B';

			//67
		case 67: 
			return'C';
		
			//68
		case 68:
			return 'D';
		
			//69
		case 69: 
			return 'E';
	
			//70
		case 70: 
			return 'F';
		
			//71
		case 71: 
			return 'G';
		
			//72
		case 72: 
			return 'H';
		
			//73
		case 73: 
			return 'I';
		
			//74
		case 74:
			return 'J';
		
			//75
		case 75: 
			return 'K';

			//76
		case 76: 
			return 'L';
		
			//77
		case 77:
			return 'M';
		
			//78
		case 78:
			return'N';
		
			//79
		case 79:
			return 'O';
		
			//80
		case 80: 
			return 'P';
		
			//81
		case 81:
			return 'Q';
		
			//82
		case 82: 
			return 'R';

			//83
		case 83: 
			return 'S';
		
			//84
		case 84:
			return 'T';
		
			//85
		case 85: 
			return 'U';

			//86
		case 86: 
			return 'V';
		
			//87
		case 87:
			return 'W';
		
			//88
		case 88:
			return 'X';

			//89
		case 89: 
			return 'Y';
		
			//90
		case 90:
			return 'Z';
		
			//91
		case 91:
			return '[';

			//92
		case 92:
			return '\\';
		
			//93
		case 93:
			return ']'; 
		
			//94
		case 94:
			return '^';

			//95
		case 95:
			return '_';

			//96
		case 96:
			return '`';
		
			//97
		case 97: 
			return 'a';
		
			//98
		case 98:
			return 'b';
		
			//99
		case 99:
			return 'c';
		
			//100
		case 100:
			return 'd';
		
			//101
		case 101: 
			return'e';
		
			//102
		case 102:
			return 'f';
		
		default:
			return '☺';
		}
	}
}
