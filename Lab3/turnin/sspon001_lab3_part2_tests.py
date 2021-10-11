tests = [ {'description': '0 + 1 = 1',
    'steps': [ {'inputs': [('PINA',0x01)], 'iterations': 5 } ],
    'expected': [('PORTC',0x60)],
    }, 
    {'description': '1 + 3 = 4',
    'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 5 } ],
    'expected': [('PORTC',0x70)],
    },
]
