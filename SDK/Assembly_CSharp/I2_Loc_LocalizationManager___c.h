#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_LocalizationManager.h"
namespace Assembly_CSharp::I2::Loc { struct LocalizationManager; };
namespace Assembly_CSharp::I2::Loc { struct LocalizationManager__GetParam; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizationManager___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::I2::Loc::LocalizationManager___c* __9;
			Assembly_CSharp::I2::Loc::LocalizationManager__GetParam* __9__41_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::Object* _ApplyLocalizationParams_b__41_0(mscorlib::System::String* p);
	};
}

