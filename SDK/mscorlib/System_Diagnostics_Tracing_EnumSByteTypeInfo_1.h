#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_TraceLoggingTypeInfo_1.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingMetadataCollector; };
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventFieldFormat.h"
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingDataCollector; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Diagnostics::Tracing
{
	template <typename EnumType> struct EnumSByteTypeInfo_1 : mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<EnumType>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(EnumType::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "EnumSByteTypeInfo`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		void WriteMetadata(mscorlib::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMetadata", std::vector<std::string> { "System.Diagnostics.Tracing.TraceLoggingMetadataCollector", "System.String", "System.Diagnostics.Tracing.EventFieldFormat" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)collector;
			params[1] = (intptr_t)name;
			params[2] = (intptr_t)&format;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void WriteData(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, EnumType& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteData", std::vector<std::string> { "System.Diagnostics.Tracing.TraceLoggingDataCollector", GetGenericTypeName<EnumType>() + (std::string)"&" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)collector;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Object* GetData(mscorlib::System::Object* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetData", std::vector<std::string> { "System.Object" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

