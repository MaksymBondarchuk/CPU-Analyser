#pragma once

extern "C"
{
	inline __declspec(dllexport) unsigned int __stdcall GetCurrentCpuRate()
	{
		unsigned int cpuRate;

		_asm {
			RDTSC
			MOV cpuRate, EAX
		}

		return cpuRate;
	}
}