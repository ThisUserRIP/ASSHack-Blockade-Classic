#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization { struct SafeSerializationManager; };
namespace mscorlib::System::Diagnostics { struct StackTrace; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
#include "System_Exception_ExceptionMessageKind.h"

namespace mscorlib::System
{
	struct Exception : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _className;
		mscorlib::System::String* _message;
		mscorlib::System::Collections::IDictionary* _data;
		mscorlib::System::Exception* _innerException;
		mscorlib::System::String* _helpURL;
		mscorlib::System::Object* _stackTrace;
		mscorlib::System::String* _stackTraceString;
		mscorlib::System::String* _remoteStackTraceString;
		int32_t _remoteStackIndex;
		mscorlib::System::Object* _dynamicMethods;
		int32_t _HResult;
		mscorlib::System::String* _source;
		mscorlib::System::Runtime::Serialization::SafeSerializationManager* _safeSerializationManager;
		IL2CPP::Array<mscorlib::System::Diagnostics::StackTrace*>* captured_traces;
		IL2CPP::Array<intptr_t>* native_trace_ips;
		struct StaticFields
		{
			mscorlib::System::Object* s_EDILock;
			int32_t _COMPlusExceptionCode;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Init();
		void _ctor();
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* get_Message();
		mscorlib::System::Collections::IDictionary* get_Data();
		static bool IsImmutableAgileException(mscorlib::System::Exception* e);
		mscorlib::System::String* GetClassName();
		mscorlib::System::Exception* get_InnerException();
		mscorlib::System::Reflection::MethodBase* get_TargetSite();
		mscorlib::System::String* get_StackTrace();
		mscorlib::System::String* GetStackTrace(bool needFileInfo);
		void SetErrorCode(int32_t hr);
		mscorlib::System::String* get_Source();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(bool needFileLineInfo, bool needMessage);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* StripFileInfo(mscorlib::System::String* stackTrace, bool isRemoteStackTrace);
		void RestoreExceptionDispatchInfo(mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo);
		int32_t get_HResult();
		void set_HResult(int32_t value);
		mscorlib::System::Type* GetType();
		static mscorlib::System::String* GetMessageFromNativeResources(mscorlib::System::Exception_ExceptionMessageKind kind);
		mscorlib::System::Exception* FixRemotingException();
		static void ReportUnhandledException(mscorlib::System::Exception* exception);
		static void _cctor();
	};
}

