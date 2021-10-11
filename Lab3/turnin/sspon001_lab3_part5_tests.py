tests = [ {'description': '0 + 1 = 1',
    'steps': [ {'inputs': [('PINB',0x01)], 'iterations': 5 },
	       {'inputs': [('PIND',0x00)], 'iterations': 5},  ],
    'expected': [('PORTB',0x00)],
    }, 
]
