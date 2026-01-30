#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct SpookyHash : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool AllowUnalignedRead;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool AttemptDetectAllowUnalignedRead();
		static void Hash(void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2);
		static void End(uint64_t* data, uint64_t& h0, uint64_t& h1, uint64_t& h2, uint64_t& h3, uint64_t& h4, uint64_t& h5, uint64_t& h6, uint64_t& h7, uint64_t& h8, uint64_t& h9, uint64_t& h10, uint64_t& h11);
		static void EndPartial(uint64_t& h0, uint64_t& h1, uint64_t& h2, uint64_t& h3, uint64_t& h4, uint64_t& h5, uint64_t& h6, uint64_t& h7, uint64_t& h8, uint64_t& h9, uint64_t& h10, uint64_t& h11);
		static void Rot64(uint64_t& x, int32_t k);
		static void Short(void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2);
		static void ShortMix(uint64_t& h0, uint64_t& h1, uint64_t& h2, uint64_t& h3);
		static void ShortEnd(uint64_t& h0, uint64_t& h1, uint64_t& h2, uint64_t& h3);
		static void Mix(uint64_t* data, uint64_t& s0, uint64_t& s1, uint64_t& s2, uint64_t& s3, uint64_t& s4, uint64_t& s5, uint64_t& s6, uint64_t& s7, uint64_t& s8, uint64_t& s9, uint64_t& s10, uint64_t& s11);
		static void memset(void* dst, int32_t value, uint64_t numberOfBytes);
		static void _cctor();
	};
}

