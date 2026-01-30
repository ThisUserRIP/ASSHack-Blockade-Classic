#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct CategoryAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool localized;
		mscorlib::System::String* categoryValue;
		struct StaticFields
		{
			System::ComponentModel::CategoryAttribute* appearance;
			System::ComponentModel::CategoryAttribute* asynchronous;
			System::ComponentModel::CategoryAttribute* behavior;
			System::ComponentModel::CategoryAttribute* data;
			System::ComponentModel::CategoryAttribute* design;
			System::ComponentModel::CategoryAttribute* action;
			System::ComponentModel::CategoryAttribute* format;
			System::ComponentModel::CategoryAttribute* layout;
			System::ComponentModel::CategoryAttribute* mouse;
			System::ComponentModel::CategoryAttribute* key;
			System::ComponentModel::CategoryAttribute* focus;
			System::ComponentModel::CategoryAttribute* windowStyle;
			System::ComponentModel::CategoryAttribute* dragDrop;
			System::ComponentModel::CategoryAttribute* defAttr;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::ComponentModel::CategoryAttribute* get_Action();
		static System::ComponentModel::CategoryAttribute* get_Appearance();
		static System::ComponentModel::CategoryAttribute* get_Asynchronous();
		static System::ComponentModel::CategoryAttribute* get_Behavior();
		static System::ComponentModel::CategoryAttribute* get_Data();
		static System::ComponentModel::CategoryAttribute* get_Default();
		static System::ComponentModel::CategoryAttribute* get_Design();
		static System::ComponentModel::CategoryAttribute* get_DragDrop();
		static System::ComponentModel::CategoryAttribute* get_Focus();
		static System::ComponentModel::CategoryAttribute* get_Format();
		static System::ComponentModel::CategoryAttribute* get_Key();
		static System::ComponentModel::CategoryAttribute* get_Layout();
		static System::ComponentModel::CategoryAttribute* get_Mouse();
		static System::ComponentModel::CategoryAttribute* get_WindowStyle();
		void _ctor();
		void _ctor(mscorlib::System::String* category);
		mscorlib::System::String* get_Category();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* GetLocalizedString(mscorlib::System::String* value);
		bool IsDefaultAttribute();
	};
}

