#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System
{
	struct Random_ : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t inext;
		int32_t inextp;
		IL2CPP::Array<int32_t>* SeedArray;
		struct StaticFields
		{
			int32_t MBIG;
			int32_t MSEED;
			int32_t MZ;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t Seed_);
		double Sample();
		int32_t InternalSample();
		int32_t Next();
		double GetSampleForLargeRange();
		int32_t Next(int32_t minValue, int32_t maxValue);
		int32_t Next(int32_t maxValue);
		double NextDouble();
		void NextBytes(IL2CPP::Array<uint8_t>* buffer);
	};
}

