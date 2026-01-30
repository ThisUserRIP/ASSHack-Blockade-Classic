#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_TimeZoneInfo.h"
namespace mscorlib::System { struct TimeZoneInfo; };
namespace mscorlib::System { struct TimeZoneInfo_AdjustmentRule; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System
{
	struct TimeZoneInfo___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::TimeZoneInfo___c* __9;
			mscorlib::System::Comparison_1<mscorlib::System::TimeZoneInfo_AdjustmentRule>* __9__19_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t _CreateLocalUnity_b__19_0(mscorlib::System::TimeZoneInfo_AdjustmentRule* rule1, mscorlib::System::TimeZoneInfo_AdjustmentRule* rule2);
	};
}

