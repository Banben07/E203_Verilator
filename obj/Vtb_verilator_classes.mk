# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_verilator.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_verilator \
	Vtb_verilator___024root__DepSet_h692d08a1__0 \
	Vtb_verilator___024root__DepSet_h692d08a1__1 \
	Vtb_verilator___024root__DepSet_h692d08a1__2 \
	Vtb_verilator___024root__DepSet_hde713a99__0 \
	Vtb_verilator___024root__DepSet_hde713a99__1 \
	Vtb_verilator___024root__DepSet_hde713a99__2 \
	Vtb_verilator___024root__DepSet_hde713a99__3 \
	Vtb_verilator_sirv_gnrl_icb2apb__D20__DepSet_hc5464e85__0 \
	Vtb_verilator_sirv_gnrl_icb2apb__D20__DepSet_h720a7c7d__0 \
	Vtb_verilator_apb_uart_sv__A20__DepSet_h4db6f526__0 \
	Vtb_verilator_apb_spi_master__A20__DepSet_h7714342f__0 \
	Vtb_verilator_timer_module__NB30__DepSet_h3077cd8e__0 \
	Vtb_verilator_floatAdd__DepSet_hb54c974b__0 \
	Vtb_verilator_floatAdd__DepSet_hb54c974b__1 \
	Vtb_verilator_floatAdd__DepSet_h0210b2af__0 \
	Vtb_verilator_floatMult__DepSet_h89e2fa7b__0 \
	Vtb_verilator_floatMult__DepSet_h89e2fa7b__1 \
	Vtb_verilator_floatMult__DepSet_h89e2fa7b__2 \
	Vtb_verilator_floatMult__DepSet_h89e2fa7b__3 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_verilator__ConstPool_0 \
	Vtb_verilator___024root__Slow \
	Vtb_verilator___024root__DepSet_h692d08a1__0__Slow \
	Vtb_verilator___024root__DepSet_h692d08a1__1__Slow \
	Vtb_verilator___024root__DepSet_hde713a99__0__Slow \
	Vtb_verilator_sirv_gnrl_icb2apb__D20__Slow \
	Vtb_verilator_sirv_gnrl_icb2apb__D20__DepSet_hc5464e85__0__Slow \
	Vtb_verilator_sirv_gnrl_icb2apb__D20__DepSet_h720a7c7d__0__Slow \
	Vtb_verilator_apb_uart_sv__A20__Slow \
	Vtb_verilator_apb_uart_sv__A20__DepSet_h4db6f526__0__Slow \
	Vtb_verilator_apb_uart_sv__A20__DepSet_hf9fb151a__0__Slow \
	Vtb_verilator_apb_spi_master__A20__Slow \
	Vtb_verilator_apb_spi_master__A20__DepSet_h7714342f__0__Slow \
	Vtb_verilator_apb_spi_master__A20__DepSet_hc4585613__0__Slow \
	Vtb_verilator_timer_module__NB30__Slow \
	Vtb_verilator_timer_module__NB30__DepSet_h3077cd8e__0__Slow \
	Vtb_verilator_timer_module__NB30__DepSet_h873bfd72__0__Slow \
	Vtb_verilator_floatAdd__Slow \
	Vtb_verilator_floatAdd__DepSet_h0210b2af__0__Slow \
	Vtb_verilator_floatMult__Slow \
	Vtb_verilator_floatMult__DepSet_h89e2fa7b__0__Slow \
	Vtb_verilator_floatMult__DepSet_h3daf07df__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_verilator__Trace__0 \
	Vtb_verilator__Trace__1 \
	Vtb_verilator__Trace__2 \
	Vtb_verilator__Trace__3 \
	Vtb_verilator__Trace__4 \
	Vtb_verilator__Trace__5 \
	Vtb_verilator__Trace__6 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_verilator__Syms \
	Vtb_verilator__Trace__0__Slow \
	Vtb_verilator__TraceDecls__0__Slow \
	Vtb_verilator__Trace__1__Slow \
	Vtb_verilator__Trace__2__Slow \
	Vtb_verilator__Trace__3__Slow \
	Vtb_verilator__Trace__4__Slow \
	Vtb_verilator__Trace__5__Slow \
	Vtb_verilator__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
