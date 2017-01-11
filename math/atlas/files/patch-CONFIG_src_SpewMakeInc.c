--- CONFIG/src/SpewMakeInc.c.orig	2017-01-10 08:21:41 UTC
+++ CONFIG/src/SpewMakeInc.c
@@ -927,6 +927,12 @@ fprintf(fpout,
       fprintf(fpout, "\t$(ATLFWAIT) -s %d -f $(waitfile)\n", delay);
    }
    else fprintf(fpout, "waitfile:\n");
+
+   fprintf(fpout, "#  -----------------------------------\n");
+   fprintf(fpout, "#  Disable suffix-transformation rules\n");
+   fprintf(fpout, "#  -----------------------------------\n");
+   fprintf(fpout, ".SUFFIX:");
+
    if (fpout != stdout && fpout != stderr) fclose(fpout);
    return(0);
 }
