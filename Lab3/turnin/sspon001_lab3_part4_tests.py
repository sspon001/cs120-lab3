tests = [ {'description': '0 + 1 = 1',
    'steps': [ {'inputs': [('PINA',0xFF)], 'iterations': 5 } ],
    'expected': [('PORTB',0x0F)], 'expected': [('PORTC', 0xF0)],
    }, 
    {'description': '1 + 3 = 4',
    'steps': [ {'inputs': [('PINA',0xAB)], 'iterations': 5 } ],
    'expected': [('PORTB',0x0A)], 'expected': [('PORTC', 0xB0)],
    },
]
