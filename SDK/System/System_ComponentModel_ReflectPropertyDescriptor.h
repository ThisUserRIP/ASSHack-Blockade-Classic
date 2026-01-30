#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_PropertyDescriptor.h"
namespace mscorlib::System { struct Object; };
namespace System::System::Diagnostics { struct TraceSwitch; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Collections_Specialized_BitVector32.h"
namespace System::System::Collections::Specialized { struct BitVector32; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace System::System::ComponentModel { struct EventDescriptor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct EventHandler; };
namespace System::System::ComponentModel { struct IExtenderProvider; };
namespace mscorlib::System::Collections { struct IList; };
namespace System::System::ComponentModel { struct PropertyChangedEventArgs; };
namespace mscorlib::System { struct EventArgs; };

namespace System::System::ComponentModel
{
	struct ReflectPropertyDescriptor : System::ComponentModel::PropertyDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Collections::Specialized::BitVector32 state;
		mscorlib::System::Type* componentClass;
		mscorlib::System::Type* type;
		mscorlib::System::Object* defaultValue;
		mscorlib::System::Object* ambientValue;
		mscorlib::System::Reflection::PropertyInfo* propInfo;
		mscorlib::System::Reflection::MethodInfo* getMethod;
		mscorlib::System::Reflection::MethodInfo* setMethod;
		mscorlib::System::Reflection::MethodInfo* shouldSerializeMethod;
		mscorlib::System::Reflection::MethodInfo* resetMethod;
		System::ComponentModel::EventDescriptor* realChangedEvent;
		System::ComponentModel::EventDescriptor* realIPropChangedEvent;
		mscorlib::System::Type* receiverType;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Type*>* argsNone;
			mscorlib::System::Object* noValue;
			System::Diagnostics::TraceSwitch* PropDescCreateSwitch;
			System::Diagnostics::TraceSwitch* PropDescUsageSwitch;
			int32_t BitDefaultValueQueried;
			int32_t BitGetQueried;
			int32_t BitSetQueried;
			int32_t BitShouldSerializeQueried;
			int32_t BitResetQueried;
			int32_t BitChangedQueried;
			int32_t BitIPropChangedQueried;
			int32_t BitReadOnlyChecked;
			int32_t BitAmbientValueQueried;
			int32_t BitSetOnDemand;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Type* componentClass, mscorlib::System::String* name, mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		void _ctor(mscorlib::System::Type* componentClass, mscorlib::System::String* name, mscorlib::System::Type* type, mscorlib::System::Reflection::PropertyInfo* propInfo, mscorlib::System::Reflection::MethodInfo* getMethod, mscorlib::System::Reflection::MethodInfo* setMethod, IL2CPP::Array<mscorlib::System::Attribute*>* attrs);
		void _ctor(mscorlib::System::Type* componentClass, mscorlib::System::String* name, mscorlib::System::Type* type, mscorlib::System::Type* receiverType, mscorlib::System::Reflection::MethodInfo* getMethod, mscorlib::System::Reflection::MethodInfo* setMethod, IL2CPP::Array<mscorlib::System::Attribute*>* attrs);
		void _ctor(mscorlib::System::Type* componentClass, System::ComponentModel::PropertyDescriptor* oldReflectPropertyDescriptor, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		mscorlib::System::Object* get_AmbientValue();
		System::ComponentModel::EventDescriptor* get_ChangedEventValue();
		System::ComponentModel::EventDescriptor* get_IPropChangedEventValue();
		void set_IPropChangedEventValue(System::ComponentModel::EventDescriptor* value);
		mscorlib::System::Type* get_ComponentType();
		mscorlib::System::Object* get_DefaultValue();
		mscorlib::System::Reflection::MethodInfo* get_GetMethodValue();
		bool get_IsExtender();
		bool get_IsReadOnly();
		mscorlib::System::Type* get_PropertyType();
		mscorlib::System::Reflection::MethodInfo* get_ResetMethodValue();
		mscorlib::System::Reflection::MethodInfo* get_SetMethodValue();
		mscorlib::System::Reflection::MethodInfo* get_ShouldSerializeMethodValue();
		void AddValueChanged(mscorlib::System::Object* component, mscorlib::System::EventHandler* handler);
		bool ExtenderCanResetValue(System::ComponentModel::IExtenderProvider* provider, mscorlib::System::Object* component);
		mscorlib::System::Type* ExtenderGetReceiverType();
		mscorlib::System::Type* ExtenderGetType(System::ComponentModel::IExtenderProvider* provider);
		mscorlib::System::Object* ExtenderGetValue(System::ComponentModel::IExtenderProvider* provider, mscorlib::System::Object* component);
		void ExtenderResetValue(System::ComponentModel::IExtenderProvider* provider, mscorlib::System::Object* component, System::ComponentModel::PropertyDescriptor* notifyDesc);
		void ExtenderSetValue(System::ComponentModel::IExtenderProvider* provider, mscorlib::System::Object* component, mscorlib::System::Object* value, System::ComponentModel::PropertyDescriptor* notifyDesc);
		bool ExtenderShouldSerializeValue(System::ComponentModel::IExtenderProvider* provider, mscorlib::System::Object* component);
		bool CanResetValue(mscorlib::System::Object* component);
		void FillAttributes(mscorlib::System::Collections::IList* attributes);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* component);
		void OnINotifyPropertyChanged(mscorlib::System::Object* component, System::ComponentModel::PropertyChangedEventArgs* e);
		void OnValueChanged(mscorlib::System::Object* component, mscorlib::System::EventArgs* e);
		void RemoveValueChanged(mscorlib::System::Object* component, mscorlib::System::EventHandler* handler);
		void ResetValue(mscorlib::System::Object* component);
		void SetValue(mscorlib::System::Object* component, mscorlib::System::Object* value);
		bool ShouldSerializeValue(mscorlib::System::Object* component);
		bool get_SupportsChangeEvents();
		static void _cctor();
	};
}

