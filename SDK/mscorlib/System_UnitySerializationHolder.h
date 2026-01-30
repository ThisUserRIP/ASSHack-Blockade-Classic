#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
namespace mscorlib::System::Reflection { struct Missing; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System::Reflection { struct RuntimeAssembly; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System
{
	struct UnitySerializationHolder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Type*>* m_instantiation;
		IL2CPP::Array<int32_t>* m_elementTypes;
		int32_t m_genericParameterPosition;
		mscorlib::System::Type* m_declaringType;
		mscorlib::System::Reflection::MethodBase* m_declaringMethod;
		mscorlib::System::String* m_data;
		mscorlib::System::String* m_assemblyName;
		int32_t m_unityType;
		static void GetUnitySerializationInfo(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Reflection::Missing* missing);
		static mscorlib::System::RuntimeType* AddElementTypes(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::RuntimeType* type);
		mscorlib::System::Type* MakeElementTypes(mscorlib::System::Type* type);
		static void GetUnitySerializationInfo(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::RuntimeType* type);
		static void GetUnitySerializationInfo(mscorlib::System::Runtime::Serialization::SerializationInfo* info, int32_t unityType, mscorlib::System::String* data, mscorlib::System::Reflection::RuntimeAssembly* assembly);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void ThrowInsufficientInformation(mscorlib::System::String* field);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Object* GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context);
	};
}

