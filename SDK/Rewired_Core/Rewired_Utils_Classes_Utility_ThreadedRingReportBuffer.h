#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct ThreadHelper; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeRingBuffer; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct ThreadedRingReportBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t crhHvOziWOQOluXkMgziMfRSIZh;
		int32_t kQwxcrXTWQFlBMtsgsHiERHCwsg;
		int32_t bRSvxwPCBhhWAwqdPzNMbkqeWWW;
		int32_t lgsQnGKRJbqezWZbRSKhhtJvFQn;
		int32_t HVZdvVFivqviGlaLSxMmPGKCRQYF;
		bool mzEEtOziXmmjRLLbbHGmstnUsuZ;
		Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* KwVWyZzMvZjWlDpaDNWXktuQbUz;
		Rewired_Core::Rewired::Utils::Classes::Data::NativeRingBuffer* jTJMvDJHCuLaDAlzETJfIiuhpzw;
		Rewired_Core::Rewired::Utils::Classes::Data::NativeRingBuffer* GfeyKPTfJtCmdJyyxbowCpjFphTE;
		mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Byte>>* OSvAmDAUWyttcuqLzNDQwnKQDbkG;
		IL2CPP::Array<uint8_t>* MzvqFGnnvHwnJsyGhHiZBTARfjG;
		IL2CPP::Array<uint8_t>* TdEZcEtxBBMKvJnfhUieGABJvvo;
		bool mPVUfcDAkZlcgJMPkpuCWurAfJg;
		bool sTsfFQGpiuTxwcGSyyoIFiyQkvDc;
		int32_t oqXeKSkndvvxvkKcDfXzLUeIkdBB;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		bool get_IsRunning();
		int32_t get_BufferLength();
		int32_t get_BytesInBuffer();
		int32_t get_EntriesInBuffer();
		IL2CPP::Array<uint8_t>* get_ReadBuffer();
		int32_t get_LastNumBytesRead();
		void _ctor(int32_t entryByteLength, int32_t entryCapacity, int32_t threadRefreshRateFPS, int32_t threadAutoKillTimeoutMS, bool threadBlockOnStartAndStop, mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Byte>>* threadRetrieveDataDelegate);
		int32_t Read();
		int32_t Read(IL2CPP::Array<uint8_t>* buffer);
		int32_t Read(intptr_t buffer, int32_t bufferLength);
		int32_t StartRead();
		void StartThread();
		void StopThread();
		bool cllfSxuDRQBfCCgnGGPMjahCwGdC();
		bool gWRRnusCFafKiOTsuNynyjhAxmW();
		void ftxfepicArhLnsyOXWEtEtXLcNky();
		void eKhNbdhfFtRehUCGTDMicbTsxJD();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}

