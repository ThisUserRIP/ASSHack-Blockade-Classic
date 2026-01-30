#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_SharedInternalsModule::UnityEngine::Bindings
{
	struct NativeConditionalAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Condition_k__BackingField;
		mscorlib::System::String* _StubReturnStatement_k__BackingField;
		bool _Enabled_k__BackingField;
		void set_Condition(mscorlib::System::String* value);
		void set_StubReturnStatement(mscorlib::System::String* value);
		void set_Enabled(bool value);
		void _ctor(mscorlib::System::String* condition);
		void _ctor(mscorlib::System::String* condition, bool enabled);
		void _ctor(mscorlib::System::String* condition, mscorlib::System::String* stubReturnStatement);
	};
}

