#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_AttributeTargets.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct AttributeUsageAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::AttributeTargets m_attributeTarget;
		bool m_allowMultiple;
		bool m_inherited;
		struct StaticFields
		{
			mscorlib::System::AttributeUsageAttribute* Default;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::AttributeTargets validOn);
		bool get_AllowMultiple();
		void set_AllowMultiple(bool value);
		bool get_Inherited();
		void set_Inherited(bool value);
		static void _cctor();
	};
}

