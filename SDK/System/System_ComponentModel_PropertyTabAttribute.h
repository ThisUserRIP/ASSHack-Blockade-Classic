#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "System_ComponentModel_PropertyTabScope.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct PropertyTabAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System::ComponentModel::PropertyTabScope>* tabScopes;
		IL2CPP::Array<mscorlib::System::Type*>* tabClasses;
		IL2CPP::Array<mscorlib::System::String*>* tabClassNames;
		void _ctor();
		void _ctor(mscorlib::System::Type* tabClass);
		void _ctor(mscorlib::System::String* tabClassName);
		void _ctor(mscorlib::System::Type* tabClass, System::ComponentModel::PropertyTabScope tabScope);
		void _ctor(mscorlib::System::String* tabClassName, System::ComponentModel::PropertyTabScope tabScope);
		IL2CPP::Array<mscorlib::System::Type*>* get_TabClasses();
		IL2CPP::Array<mscorlib::System::String*>* get_TabClassNames();
		IL2CPP::Array<System::ComponentModel::PropertyTabScope>* get_TabScopes();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(System::ComponentModel::PropertyTabAttribute* other);
		int32_t GetHashCode();
		void InitializeArrays(IL2CPP::Array<mscorlib::System::String*>* tabClassNames, IL2CPP::Array<System::ComponentModel::PropertyTabScope>* tabScopes);
		void InitializeArrays(IL2CPP::Array<mscorlib::System::Type*>* tabClasses, IL2CPP::Array<System::ComponentModel::PropertyTabScope>* tabScopes);
		void InitializeArrays(IL2CPP::Array<mscorlib::System::String*>* tabClassNames, IL2CPP::Array<mscorlib::System::Type*>* tabClasses, IL2CPP::Array<System::ComponentModel::PropertyTabScope>* tabScopes);
	};
}

