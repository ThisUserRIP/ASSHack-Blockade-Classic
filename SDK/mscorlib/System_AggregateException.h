#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Exception.h"
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System
{
	struct AggregateException : mscorlib::System::Exception
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Exception>* m_innerExceptions;
		void _ctor();
		void _ctor(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Exception>* innerExceptions);
		void _ctor(IL2CPP::Array<mscorlib::System::Exception*>* innerExceptions);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Exception>* innerExceptions);
		void _ctor(mscorlib::System::String* message, IL2CPP::Array<mscorlib::System::Exception*>* innerExceptions);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Exception>* innerExceptions);
		void _ctor(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* innerExceptionInfos);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* innerExceptionInfos);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* innerExceptionInfos);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Exception>* get_InnerExceptions();
		mscorlib::System::AggregateException* Flatten();
		mscorlib::System::String* ToString();
	};
}

