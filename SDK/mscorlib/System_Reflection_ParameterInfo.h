#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Reflection_ParameterAttributes.h"
namespace mscorlib::System::Runtime::InteropServices { struct MarshalAsAttribute; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
#include "System_Reflection_CallingConventions.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System::Reflection
{
	struct ParameterInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* ClassImpl;
		mscorlib::System::Object* DefaultValueImpl;
		mscorlib::System::Reflection::MemberInfo* MemberImpl;
		mscorlib::System::String* NameImpl;
		int32_t PositionImpl;
		mscorlib::System::Reflection::ParameterAttributes AttrsImpl;
		mscorlib::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs;
		void _ctor();
		mscorlib::System::String* ToString();
		static void FormatParameters(mscorlib::System::Text::StringBuilder* sb, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* p, mscorlib::System::Reflection::CallingConventions callingConvention, bool serialization);
		mscorlib::System::Type* get_ParameterType();
		mscorlib::System::Reflection::ParameterAttributes get_Attributes();
		bool get_IsIn();
		bool get_IsOptional();
		bool get_IsOut();
		bool get_IsRetval();
		mscorlib::System::String* get_Name();
		int32_t get_Position();
		IL2CPP::Array<mscorlib::System::Object*>* GetPseudoCustomAttributes();
		mscorlib::System::Object* GetDefaultValueImpl();
		mscorlib::System::Object* get_DefaultValue();
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Object* GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		static mscorlib::System::Reflection::ParameterInfo* New(mscorlib::System::Reflection::ParameterInfo* pinfo, mscorlib::System::Reflection::MemberInfo* member);
	};
}

