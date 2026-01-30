#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_EventDescriptor.h"
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Reflection { struct EventInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct EventDescriptor; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System::Collections { struct IList; };

namespace System::System::ComponentModel
{
	struct ReflectEventDescriptor : System::ComponentModel::EventDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* type;
		mscorlib::System::Type* componentClass;
		mscorlib::System::Reflection::MethodInfo* addMethod;
		mscorlib::System::Reflection::MethodInfo* removeMethod;
		mscorlib::System::Reflection::EventInfo* realEvent;
		bool filledMethods;
		void _ctor(mscorlib::System::Type* componentClass, mscorlib::System::String* name, mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		void _ctor(mscorlib::System::Type* componentClass, mscorlib::System::Reflection::EventInfo* eventInfo);
		void _ctor(mscorlib::System::Type* componentType, System::ComponentModel::EventDescriptor* oldReflectEventDescriptor, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		mscorlib::System::Type* get_ComponentType();
		mscorlib::System::Type* get_EventType();
		bool get_IsMulticast();
		void AddEventHandler(mscorlib::System::Object* component, mscorlib::System::Delegate* value);
		void FillAttributes(mscorlib::System::Collections::IList* attributes);
		void FillEventInfoAttribute(mscorlib::System::Reflection::EventInfo* realEventInfo, mscorlib::System::Collections::IList* attributes);
		void FillMethods();
		void FillSingleMethodAttribute(mscorlib::System::Reflection::MethodInfo* realMethodInfo, mscorlib::System::Collections::IList* attributes);
		void RemoveEventHandler(mscorlib::System::Object* component, mscorlib::System::Delegate* value);
	};
}

