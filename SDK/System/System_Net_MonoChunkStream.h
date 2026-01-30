#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct WebHeaderCollection; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Net_MonoChunkStream_State.h"
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };

namespace System::System::Net
{
	struct MonoChunkStream : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::WebHeaderCollection* headers;
		int32_t chunkSize;
		int32_t chunkRead;
		int32_t totalWritten;
		System::Net::MonoChunkStream_State state;
		mscorlib::System::Text::StringBuilder* saved;
		bool sawCR;
		bool gotit;
		int32_t trailerState;
		mscorlib::System::Collections::ArrayList* chunks;
		void _ctor(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::WebHeaderCollection* headers);
		void _ctor(System::Net::WebHeaderCollection* headers);
		void ResetBuffer();
		void WriteAndReadBack(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, int32_t& read);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		int32_t ReadFromChunks(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void InternalWrite(IL2CPP::Array<uint8_t>* buffer, int32_t& offset, int32_t size);
		bool get_WantMore();
		bool get_DataAvailable();
		int32_t get_ChunkLeft();
		System::Net::MonoChunkStream_State ReadBody(IL2CPP::Array<uint8_t>* buffer, int32_t& offset, int32_t size);
		System::Net::MonoChunkStream_State GetChunkSize(IL2CPP::Array<uint8_t>* buffer, int32_t& offset, int32_t size);
		static mscorlib::System::String* RemoveChunkExtension(mscorlib::System::String* input);
		System::Net::MonoChunkStream_State ReadCRLF(IL2CPP::Array<uint8_t>* buffer, int32_t& offset, int32_t size);
		System::Net::MonoChunkStream_State ReadTrailer(IL2CPP::Array<uint8_t>* buffer, int32_t& offset, int32_t size);
		static void ThrowProtocolViolation(mscorlib::System::String* message);
	};
}

