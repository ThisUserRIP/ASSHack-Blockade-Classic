#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_TraceLoggingTypeInfo.h"
namespace mscorlib::System::Diagnostics::Tracing { template <typename DataType> struct TraceLoggingTypeInfo_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventOpcode.h"
#include "System_Diagnostics_Tracing_EventKeywords.h"
#include "System_Diagnostics_Tracing_EventTags.h"
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingDataCollector; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace mscorlib::System::Diagnostics::Tracing
{
	template <typename DataType> struct TraceLoggingTypeInfo_1 : mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(DataType::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "TraceLoggingTypeInfo`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		struct StaticFields
		{
			mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventOpcode opcode, mscorlib::System::Diagnostics::Tracing::EventKeywords keywords, mscorlib::System::Diagnostics::Tracing::EventTags tags)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventOpcode", "System.Diagnostics.Tracing.EventKeywords", "System.Diagnostics.Tracing.EventTags" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)name;
			params[1] = (intptr_t)&level;
			params[2] = (intptr_t)&opcode;
			params[3] = (intptr_t)&keywords;
			params[4] = (intptr_t)&tags;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* get_Instance()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*)returnValue;
		}
		void WriteData(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, DataType& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteData", std::vector<std::string> { "System.Diagnostics.Tracing.TraceLoggingDataCollector", GetGenericTypeName<DataType>() + (std::string)"&" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)collector;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void WriteObjectData(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, mscorlib::System::Object* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectData", std::vector<std::string> { "System.Diagnostics.Tracing.TraceLoggingDataCollector", "System.Object" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)collector;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* GetInstance(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Type>* recursionCheck)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInstance", std::vector<std::string> { "System.Collections.Generic.List`1<System.Type>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)recursionCheck;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*)returnValue;
		}
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* InitInstance()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitInstance");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*)returnValue;
		}
	};
}

