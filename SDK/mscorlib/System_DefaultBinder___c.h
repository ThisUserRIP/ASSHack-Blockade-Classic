#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_DefaultBinder.h"
namespace mscorlib::System { struct DefaultBinder; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System
{
	struct DefaultBinder___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::DefaultBinder___c* __9;
			mscorlib::System::Predicate_1<mscorlib::System::Type>* __9__3_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _SelectProperty_b__3_0(mscorlib::System::Type* t);
	};
}

