--- tune/blas/gemm/emit_mm.c.orig	2017-01-12 02:32:43 UTC
+++ tune/blas/gemm/emit_mm.c
@@ -2709,7 +2709,9 @@ void GenMakefile(char pre, int nb, int n
       }
    }
 
-   fprintf(fp, "\n.c.o:\n\t$(%cMC) $(CDEFS2) $(%cMCFLAGS) -c $<\n", UPR, UPR);
+   fprintf(fp, "\n");
+   fprintf(fp, ".SUFFIXES: .c .o\n")l
+   fprintf(fp, ".c.o:\n\t$(%cMC) $(CDEFS2) $(%cMCFLAGS) -c $<\n", UPR, UPR);
    fclose(fp);
 }
 
