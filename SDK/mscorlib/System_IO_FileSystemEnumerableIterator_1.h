#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_Iterator_1.h"
namespace mscorlib::System::IO { template <typename TSource> struct SearchResultHandler_1; };
namespace mscorlib::System::IO { struct Directory_SearchData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::Microsoft::Win32::SafeHandles { struct SafeFindHandle; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_IO_SearchOption.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { template <typename TSource> struct Iterator_1; };
namespace mscorlib::System::IO { struct SearchResult; };
namespace mscorlib::Microsoft::Win32 { struct Win32Native_WIN32_FIND_DATA; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::IO
{
	template <typename TSource> struct FileSystemEnumerableIterator_1 : mscorlib::System::IO::Iterator_1<TSource>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TSource::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.IO", "FileSystemEnumerableIterator`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		mscorlib::System::IO::SearchResultHandler_1<TSource>* _resultHandler;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::IO::Directory_SearchData>* searchStack;
		mscorlib::System::IO::Directory_SearchData* searchData;
		mscorlib::System::String* searchCriteria;
		mscorlib::Microsoft::Win32::SafeHandles::SafeFindHandle* _hnd;
		bool needsParentPathDiscoveryDemand;
		bool empty;
		mscorlib::System::String* userPath;
		mscorlib::System::IO::SearchOption searchOption;
		mscorlib::System::String* fullPath;
		mscorlib::System::String* normalizedSearchPath;
		bool _checkHost;
		void _ctor(mscorlib::System::String* path, mscorlib::System::String* originalUserPath, mscorlib::System::String* searchPattern, mscorlib::System::IO::SearchOption searchOption, mscorlib::System::IO::SearchResultHandler_1<TSource>* resultHandler, bool checkHost)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String", "System.IO.SearchOption", "System.IO.SearchResultHandler`1<TSource>", "System.Boolean" });
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)path;
			params[1] = (intptr_t)originalUserPath;
			params[2] = (intptr_t)searchPattern;
			params[3] = (intptr_t)&searchOption;
			params[4] = (intptr_t)resultHandler;
			params[5] = (intptr_t)&checkHost;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void CommonInit()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CommonInit");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::String* fullPath, mscorlib::System::String* normalizedSearchPath, mscorlib::System::String* searchCriteria, mscorlib::System::String* userPath, mscorlib::System::IO::SearchOption searchOption, mscorlib::System::IO::SearchResultHandler_1<TSource>* resultHandler, bool checkHost)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.IO.SearchOption", "System.IO.SearchResultHandler`1<TSource>", "System.Boolean" });
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)fullPath;
			params[1] = (intptr_t)normalizedSearchPath;
			params[2] = (intptr_t)searchCriteria;
			params[3] = (intptr_t)userPath;
			params[4] = (intptr_t)&searchOption;
			params[5] = (intptr_t)resultHandler;
			params[6] = (intptr_t)&checkHost;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::IO::Iterator_1<TSource>* Clone()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::IO::Iterator_1<TSource>*)returnValue;
		}
		void Dispose(bool disposing)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&disposing;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool MoveNext()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveNext");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::IO::SearchResult* CreateSearchResult(mscorlib::System::IO::Directory_SearchData* localSearchData, mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* findData)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSearchResult", std::vector<std::string> { "System.IO.Directory/SearchData", "Microsoft.Win32.Win32Native/WIN32_FIND_DATA" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)localSearchData;
			params[1] = (intptr_t)findData;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::IO::SearchResult*)returnValue;
		}
		void HandleError(int32_t hr, mscorlib::System::String* path)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleError", std::vector<std::string> { "System.Int32", "System.String" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&hr;
			params[1] = (intptr_t)path;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void AddSearchableDirsToStack(mscorlib::System::IO::Directory_SearchData* localSearchData)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSearchableDirsToStack", std::vector<std::string> { "System.IO.Directory/SearchData" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)localSearchData;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void DoDemand(mscorlib::System::String* fullPathToDemand)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoDemand", std::vector<std::string> { "System.String" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)fullPathToDemand;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static mscorlib::System::String* NormalizeSearchPattern(mscorlib::System::String* searchPattern)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NormalizeSearchPattern", std::vector<std::string> { "System.String" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)searchPattern;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
		static mscorlib::System::String* GetNormalizedSearchCriteria(mscorlib::System::String* fullSearchString, mscorlib::System::String* fullPathMod)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNormalizedSearchCriteria", std::vector<std::string> { "System.String", "System.String" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)fullSearchString;
			params[1] = (intptr_t)fullPathMod;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
		static mscorlib::System::String* GetFullSearchString(mscorlib::System::String* fullPath, mscorlib::System::String* searchPattern)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFullSearchString", std::vector<std::string> { "System.String", "System.String" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)fullPath;
			params[1] = (intptr_t)searchPattern;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
	};
}

