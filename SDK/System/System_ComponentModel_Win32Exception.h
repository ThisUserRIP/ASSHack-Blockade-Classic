#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Runtime_InteropServices_ExternalException.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace System::System::ComponentModel
{
	struct Win32Exception : mscorlib::System::Runtime::InteropServices::ExternalException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t nativeErrorCode;
		struct StaticFields
		{
			bool s_ErrorMessagesInitialized;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::String>* s_ErrorMessage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t error);
		void _ctor(int32_t error, mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int32_t get_NativeErrorCode();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static mscorlib::System::String* GetErrorMessage(int32_t error);
		static void InitializeErrorMessages();
		static void InitializeErrorMessages1();
		static void InitializeErrorMessages2();
		static void InitializeErrorMessages3();
		static void InitializeErrorMessages4();
		static void InitializeErrorMessages5();
		static void InitializeErrorMessages6();
		static void InitializeErrorMessages7();
		static void InitializeErrorMessages8();
		static void InitializeErrorMessages9();
		static void InitializeErrorMessages10();
		static void InitializeErrorMessages11();
		static void InitializeErrorMessages12();
		static void InitializeErrorMessages13();
		static void InitializeErrorMessages14();
		static void InitializeErrorMessages15();
		static void _cctor();
	};
}

