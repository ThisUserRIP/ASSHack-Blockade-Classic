#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct RequireComponent : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* m_Type0;
		mscorlib::System::Type* m_Type1;
		mscorlib::System::Type* m_Type2;
		void _ctor(mscorlib::System::Type* requiredComponent);
		void _ctor(mscorlib::System::Type* requiredComponent, mscorlib::System::Type* requiredComponent2);
	};
}

