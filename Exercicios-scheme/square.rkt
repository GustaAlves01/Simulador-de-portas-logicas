#lang sicp
(define (square x) (* x x))
(define (sum_square a b) (+ (square a) (square b)))
(define (result n1 n2 n3)
  (cond
    ((and (< n1 n2) (< n1 n3)) (sum_square n2 n3))
    ((and (< n2 n1) (< n2 n3)) (sum_square n1 n3))
    (else (sum_square n1 n2))))

(result 2 4 3)

