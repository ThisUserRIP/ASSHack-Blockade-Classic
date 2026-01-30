#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_ParamsArray.h"
namespace mscorlib::System { struct ParamsArray; };

namespace mscorlib::System::Text
{
	struct StringBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<wchar_t>* m_ChunkChars;
		mscorlib::System::Text::StringBuilder* m_ChunkPrevious;
		int32_t m_ChunkLength;
		int32_t m_ChunkOffset;
		int32_t m_MaxCapacity;
		struct StaticFields
		{
			int32_t DefaultCapacity;
			mscorlib::System::String* CapacityField;
			mscorlib::System::String* MaxCapacityField;
			mscorlib::System::String* StringValueField;
			mscorlib::System::String* ThreadIDField;
			int32_t MaxChunkSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t capacity);
		void _ctor(mscorlib::System::String* value);
		void _ctor(mscorlib::System::String* value, int32_t capacity);
		void _ctor(mscorlib::System::String* value, int32_t startIndex, int32_t length, int32_t capacity);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int32_t get_Capacity();
		void set_Capacity(int32_t value);
		int32_t get_MaxCapacity();
		int32_t EnsureCapacity(int32_t capacity);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(int32_t startIndex, int32_t length);
		mscorlib::System::Text::StringBuilder* Clear();
		int32_t get_Length();
		void set_Length(int32_t value);
		wchar_t get_Chars(int32_t index);
		void set_Chars(int32_t index, wchar_t value);
		mscorlib::System::Text::StringBuilder* Append(wchar_t value, int32_t repeatCount);
		mscorlib::System::Text::StringBuilder* Append(IL2CPP::Array<wchar_t>* value, int32_t startIndex, int32_t charCount);
		mscorlib::System::Text::StringBuilder* Append(mscorlib::System::String* value);
		void AppendHelper(mscorlib::System::String* value);
		mscorlib::System::Text::StringBuilder* Append(mscorlib::System::String* value, int32_t startIndex, int32_t count);
		mscorlib::System::Text::StringBuilder* AppendLine();
		mscorlib::System::Text::StringBuilder* AppendLine(mscorlib::System::String* value);
		mscorlib::System::Text::StringBuilder* Insert(int32_t index, mscorlib::System::String* value, int32_t count);
		mscorlib::System::Text::StringBuilder* Remove(int32_t startIndex, int32_t length);
		mscorlib::System::Text::StringBuilder* Append(bool value);
		mscorlib::System::Text::StringBuilder* Append(uint8_t value);
		mscorlib::System::Text::StringBuilder* Append(wchar_t value);
		mscorlib::System::Text::StringBuilder* Append(int32_t value);
		mscorlib::System::Text::StringBuilder* Append(int64_t value);
		mscorlib::System::Text::StringBuilder* Append(float value);
		mscorlib::System::Text::StringBuilder* Append(mscorlib::System::Object* value);
		mscorlib::System::Text::StringBuilder* Append(IL2CPP::Array<wchar_t>* value);
		mscorlib::System::Text::StringBuilder* Insert(int32_t index, mscorlib::System::String* value);
		mscorlib::System::Text::StringBuilder* Insert(int32_t index, wchar_t value);
		mscorlib::System::Text::StringBuilder* AppendFormat(mscorlib::System::String* format, mscorlib::System::Object* arg0);
		mscorlib::System::Text::StringBuilder* AppendFormat(mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1);
		mscorlib::System::Text::StringBuilder* AppendFormat(mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1, mscorlib::System::Object* arg2);
		mscorlib::System::Text::StringBuilder* AppendFormat(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		mscorlib::System::Text::StringBuilder* AppendFormat(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::Object* arg0);
		mscorlib::System::Text::StringBuilder* AppendFormat(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1);
		mscorlib::System::Text::StringBuilder* AppendFormat(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		static void FormatError();
		mscorlib::System::Text::StringBuilder* AppendFormatHelper(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::ParamsArray args);
		mscorlib::System::Text::StringBuilder* Replace(mscorlib::System::String* oldValue, mscorlib::System::String* newValue);
		mscorlib::System::Text::StringBuilder* Replace(mscorlib::System::String* oldValue, mscorlib::System::String* newValue, int32_t startIndex, int32_t count);
		mscorlib::System::Text::StringBuilder* Append(wchar_t* value, int32_t valueCount);
		void Insert(int32_t index, wchar_t* value, int32_t valueCount);
		void ReplaceAllInChunk(IL2CPP::Array<int32_t>* replacements, int32_t replacementsCount, mscorlib::System::Text::StringBuilder* sourceChunk, int32_t removeCount, mscorlib::System::String* value);
		bool StartsWith(mscorlib::System::Text::StringBuilder* chunk, int32_t indexInChunk, int32_t count, mscorlib::System::String* value);
		void ReplaceInPlaceAtChunk(mscorlib::System::Text::StringBuilder& chunk, int32_t& indexInChunk, wchar_t* value, int32_t count);
		static void ThreadSafeCopy(wchar_t* sourcePtr, IL2CPP::Array<wchar_t>* destination, int32_t destinationIndex, int32_t count);
		static void ThreadSafeCopy(IL2CPP::Array<wchar_t>* source, int32_t sourceIndex, IL2CPP::Array<wchar_t>* destination, int32_t destinationIndex, int32_t count);
		mscorlib::System::Text::StringBuilder* FindChunkForIndex(int32_t index);
		mscorlib::System::Text::StringBuilder* Next(mscorlib::System::Text::StringBuilder* chunk);
		void ExpandByABlock(int32_t minBlockCharCount);
		void _ctor(mscorlib::System::Text::StringBuilder* from);
		void MakeRoom(int32_t index, int32_t count, mscorlib::System::Text::StringBuilder& chunk, int32_t& indexInChunk, bool doneMoveFollowingChars);
		void _ctor(int32_t size, int32_t maxCapacity, mscorlib::System::Text::StringBuilder* previousBlock);
		void Remove(int32_t startIndex, int32_t count, mscorlib::System::Text::StringBuilder& chunk, int32_t& indexInChunk);
	};
}

