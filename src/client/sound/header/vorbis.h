/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 * USA.
 *
 * =======================================================================
 *
 * The header file for the OGG/Vorbis playback
 *
 * =======================================================================
 */

#ifdef OGG

#ifndef CL_SOUND_VORBIS_H
#define CL_SOUND_VORBIS_H

/* The OGG codec can return the samples in a number
 * of different formats, we use the standard signed
 * short format. */
#define OGG_SAMPLEWIDTH 2

typedef enum
{
	PLAY,
	PAUSE,
	STOP
} ogg_status_t;

void OGG_Init(void);
void OGG_PlayTrack(int track);
void OGG_Shutdown(void);
void OGG_Read(void);
void OGG_Stop(void);
void OGG_Stream(void);

/* Console commands. */
void OGG_PauseCmd(void);
void OGG_PlayCmd(void);
void OGG_PlayTrack(int track);
void OGG_ResumeCmd(void);
void OGG_StatusCmd(void);

#endif
#endif
