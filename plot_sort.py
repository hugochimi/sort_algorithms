#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jun  6 18:12:56 2019

@author: puhl
"""

# Teste com aquivo .csv

import numpy as np
import matplotlib.pyplot as plt
data = np.genfromtxt('comparacao_medio.csv', delimiter=', ')
data1 = np.genfromtxt('comparacao_melhor.csv', delimiter=', ')
data2 = np.genfromtxt('comparacao_pior.csv', delimiter=', ')

itens = data[0:,0]

merge = data[0:, 1]
merge1 = data1[0:, 1]
merge2 = data2[0:, 1]

quick = data[0:, 2]
quick1 = data1[0:, 2]
quick2 = data2[0:, 2]

selection = data[0:, 3]
selection1 = data1[0:, 3]
selection2 = data2[0:, 3]

insertion = data[0:, 4]
insertion1 = data1[0:, 4]
insertion2 = data2[0:, 4]

bolha = data[0:, 5]
bolha1 = data1[0:, 5]
bolha2 = data2[0:, 5]

plt.figure();
plt.plot(itens, merge, label='merge');
plt.plot(itens, quick, label='quick');
plt.plot(itens, selection, label='selection');
plt.plot(itens, insertion, label='insertion');
plt.plot(itens, bolha, label='bolha');
plt.legend()
plt.title('Caso médio')
plt.xlabel('Itens')
plt.ylabel('Tempo')
plt.show()

plt.figure();
plt.plot(itens, merge1, label='merge');
plt.plot(itens, quick1, label='quick');
plt.plot(itens, selection1, label='selection');
plt.plot(itens, insertion1, label='insertion');
plt.plot(itens, bolha1, label='bolha');
plt.legend()
plt.title('Melhor Caso')
plt.xlabel('Itens')
plt.ylabel('Tempo')
plt.show()

plt.figure();
plt.plot(itens, merge2, label='merge');
plt.plot(itens, quick2, label='quick');
plt.plot(itens, selection2, label='selection');
plt.plot(itens, insertion2, label='insertion');
plt.plot(itens, bolha2, label='bolha');
plt.legend()
plt.title('Pior Caso')
plt.xlabel('Itens')
plt.ylabel('Tempo')
plt.show()

