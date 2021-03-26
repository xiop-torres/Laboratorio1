#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

class transposicion{
	private int[] p;
	public columna(int [] patron){
		int a[] = new int[patron.lenght] //tamaño del patron
		
		int i=0;
		
		boolean b =true ;
		
		while((i<patron.lenght) && b){
			if((patron[i] < patron.lenght) && (patron[i]>=0))
			else b= false ;
			i++;
		}
		i=0;
		
		while((i< patron.lenght) && b){
			b=(a[]== i);
			i++;
		}
		
		if(!b) throw new IllegalArgumentException();
		
		p = pattern;
		
	}
	public byte[] encrypt(byte[] m) {
		int l = m.length;
		int n = p.length;
		
		byte c[] = new byte[l];
		
		int k = 0;
		
		for (int i = 0; i < n; i++)
			for (int j = p[i]; j < l; j += n) c[k++] = m[j];
		
		return c;
	}
	public byte[] decrypt(byte[] c) {
		int l = c.length;
		int n = p.length;
		
		byte m[] = new byte[l];
		
		int k = 0;
		
		for (int i = 0; i < n; i++)
			for (int j = p[i]; j < l; j += n) m[j] = c[k++];
		
		return m;
	}
}




