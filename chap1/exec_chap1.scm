(define hello-proc
  (lambda ()
    (printf "Hi friend!\n")))

;; A variable x occurs free in a lambda calculus expression
;; E if and only if 
;; 1. E is a variable reference and E is the same as x
;; 2. E is of the form (lambda (y) E'), where y is different
;;    from x and x occurs free in E'
;; 3. E is of the form (E1 E1) and x occurs free in E1 or E2
(define occurs-free?
  (lambda (var exp)
    (cond ((symbol? exp) (eqv? exp var))
	  ((eqv? (car exp) 'lambda)
	   (and (not (eqv? (caadr exp) var))
		(occurs-free? var (caddr exp))))
	  (else (or (occurs-free? var (car exp))
		    (occurs-free? var (cadr exp)))))))

;; A variable x occurs bound in a lambda calculus expression
;; E if and only if
;; 1. E is of the form (lambda (y) E'), where x occurs bound;;    in E' or x and y are the same variable and y occurs
;;    free in E'
;; 2. E is of the form (E1 E2) and x occurs bound in E1 or E2
(define occurs-bound?
  (lambda (var exp)
    (cond ((symbol? exp) #f)
	  ((eqv? (car exp) 'lambda)
	   (or (occurs-bound? var (caddr exp))
	       (and (eqv? (caadr exp) var)
		    (occurs-free? var (caddr exp)))))
	  (else (or (occurs-bound? var (car exp))
		    (occurs-bound? var (cadr exp)))))))


(define x '(2 3 4))

(lambda (x)
  (lambda (y)
    ((lambda (x)
       (x y))
     x)))

(lambda (z)
  ((lambda (a b c)
     (a (lambda (a)
	  (+ a c))
	b))
   (lambda (f x)
     (f (z x)))))


