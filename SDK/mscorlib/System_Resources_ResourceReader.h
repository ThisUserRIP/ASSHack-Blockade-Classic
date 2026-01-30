#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct BinaryReader; };
namespace mscorlib::System { struct String; };
#include "System_Resources_ResourceLocator.h"
namespace mscorlib::System::Resources { struct ResourceLocator; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryFormatter; };
namespace mscorlib::System::IO { struct UnmanagedMemoryStream; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Resources { struct ResourceReader_ResourceEnumerator; };
namespace mscorlib::System { struct Object; };
#include "System_Resources_ResourceTypeCode.h"

namespace mscorlib::System::Resources
{
	struct ResourceReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::BinaryReader* _store;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceLocator>* _resCache;
		int64_t _nameSectionOffset;
		int64_t _dataSectionOffset;
		IL2CPP::Array<int32_t>* _nameHashes;
		int32_t* _nameHashesPtr;
		IL2CPP::Array<int32_t>* _namePositions;
		int32_t* _namePositionsPtr;
		IL2CPP::Array<mscorlib::System::RuntimeType*>* _typeTable;
		IL2CPP::Array<int32_t>* _typeNamePositions;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _objFormatter;
		int32_t _numResources;
		mscorlib::System::IO::UnmanagedMemoryStream* _ums;
		int32_t _version;
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceLocator>* resCache);
		void Close();
		void Dispose();
		void Dispose(bool disposing);
		static int32_t ReadUnalignedI4(int32_t* p);
		void SkipString();
		int32_t GetNameHash(int32_t index);
		int32_t GetNamePosition(int32_t index);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		mscorlib::System::Resources::ResourceReader_ResourceEnumerator* GetEnumeratorInternal();
		int32_t FindPosForResource(mscorlib::System::String* name);
		bool CompareStringEqualsName(mscorlib::System::String* name);
		mscorlib::System::String* AllocateStringForNameIndex(int32_t index, int32_t& dataOffset);
		mscorlib::System::Object* GetValueForNameIndex(int32_t index);
		mscorlib::System::String* LoadString(int32_t pos);
		mscorlib::System::Object* LoadObject(int32_t pos);
		mscorlib::System::Object* LoadObject(int32_t pos, mscorlib::System::Resources::ResourceTypeCode& typeCode);
		mscorlib::System::Object* LoadObjectV1(int32_t pos);
		mscorlib::System::Object* _LoadObjectV1(int32_t pos);
		mscorlib::System::Object* LoadObjectV2(int32_t pos, mscorlib::System::Resources::ResourceTypeCode& typeCode);
		mscorlib::System::Object* _LoadObjectV2(int32_t pos, mscorlib::System::Resources::ResourceTypeCode& typeCode);
		mscorlib::System::Object* DeserializeObject(int32_t typeIndex);
		void ReadResources();
		void _ReadResources();
		mscorlib::System::RuntimeType* FindType(int32_t typeIndex);
	};
}

