#ifndef VERSION_H
#define VERSION_H

#define VERSION "2.7"

// used to save windows state. must be incremented if window layout changes!
#define UIVERSION 0

#define NUCLEIURL "http://nuclei.sf.net"

#define PAPERDOI "[doi:10.1016/j.nima.2013.05.045]"
#define PAPERSHORT "M. Nagl, et al., NIM A <b>726</b> (2013), 17-30"
#define PAPERURL "http://dx.doi.org/10.1016/j.nima.2013.05.045"
#define PAPERSTATUSBAR "Please refer to: <a href=\"" PAPERURL "\">" PAPERSHORT "</a> " PAPERDOI
#define PAPERTEXT "<p>For a detailed description, please refer to:<br /><a href=\"" PAPERURL "\">" PAPERSHORT "</a><br />" PAPERDOI "</p>"

#define NUCLEIABOUT "\
<p><b>Nuclei</b></p><p>shows decay schemes, computes angular correlation coefficients of decay cascades and \
shows the expected photo peak spectra.</p> \
\
<p><a href=\"" NUCLEIURL "\">" NUCLEIURL "</a></p> \
<p>Copyright 2012-2013 Matthias A. Nagl, Georg-August Universität, Göttingen, Germany</p> \
"

#define LIBAKKABOUT "\
<p>Nuclei uses <b>libAkk</b> for angular correlation coefficient calculations</p> \
<p>Copyright 2012 João Guilherme Martins Correia & Marcelo Baptista Barbosa, CERN, Geneva, Switzerland</p> \
"

#define GPL "\
<p>Nuclei as well as libAkk is free software: you can redistribute it and/or modify \
it under the terms of the GNU General Public License as published by \
the Free Software Foundation, either version 3 of the License, or \
(at your option) any later version.</p> \
 \
<p>This program is distributed in the hope that it will be useful, \
but WITHOUT ANY WARRANTY; without even the implied warranty of \
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the \
GNU General Public License for more details.</p> \
 \
<p>You should have received a copy of the GNU General Public License \
along with this program.  If not, see <a href=\"http://www.gnu.org/licenses/\">http://www.gnu.org/licenses/</a>.</p> \
"

#define NUCLEIVERSIONURL "http://nuclei.sourceforge.net/versioninfo/versions.txt"

#endif // VERSION_H
