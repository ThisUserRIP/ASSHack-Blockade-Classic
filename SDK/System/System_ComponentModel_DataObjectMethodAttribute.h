#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_ComponentModel_DataObjectMethodType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct DataObjectMethodAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _isDefault;
		System::ComponentModel::DataObjectMethodType _methodType;
		void _ctor(System::ComponentModel::DataObjectMethodType methodType);
		void _ctor(System::ComponentModel::DataObjectMethodType methodType, bool isDefault);
		bool get_IsDefault();
		System::ComponentModel::DataObjectMethodType get_MethodType();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool Match(mscorlib::System::Object* obj);
	};
}

